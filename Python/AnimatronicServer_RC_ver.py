import asyncio
# from asyncio.windows_events import NULL
# WebSocketモジュールを宣言する。
import websockets
# クライアント接続すると呼び出す。
import json
# from Rcb4Lib.Rcb4BaseLib import Rcb4BaseLib
from configparser import ConfigParser

# IPアドレス取得用
import socket
# シリアル通信用
import serial


RC_ServoAngles = [90,90,90,90,110,70,175]
bias_angle = [0,0]

COMPORT = "COM7"
# COMPORT = "COM4"
# Arduino
EyeBallBoard = serial.Serial(COMPORT, 115200,timeout=3)


def mapping(x, in_min, in_max, out_min, out_max):
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min
# def serial_communication(data1, data2,data3,data4):
#     EyeBallBoard.write(b'a')   #データ送信合図
#     EyeBallBoard.write(bytes([data1]))
#     EyeBallBoard.write(bytes([data2]))
#     EyeBallBoard.write(bytes([data3]))
#     EyeBallBoard.write(bytes([data4]))

#     print(data1, data2,data3, data4)

def serial_communication(data1, data2,data3,data4,data5,data6,data7):
    EyeBallBoard.write(b'a')   #データ送信合図
    EyeBallBoard.write(bytes([data1]))
    EyeBallBoard.write(bytes([data2]))
    EyeBallBoard.write(bytes([data3]))
    EyeBallBoard.write(bytes([data4]))
    EyeBallBoard.write(bytes([data5]))
    EyeBallBoard.write(bytes([data6]))
    EyeBallBoard.write(bytes([data7]))
    print(data1, data2,data3, data4,data5,data6,data7)

async def accept(websocket, path):
    EyeStateChanged = False
    # 無限ループ
    while True:
        # クライアントからメッセージを待機する。
        data = await websocket.recv()
        # コンソールに出力
        print(data)
        data_json = json.loads(data)
        for face_data in data_json:
            if face_data == "JawOpen":
                jaw = data_json["JawOpen"]
                jaw_angle = mapping(jaw, 0.0, 0.9, 175.0, 100.0)
                RC_ServoAngles[6]=jaw_angle
                EyeStateChanged=True


            if face_data == "EyeBlinkLeft":
                blink_l = data_json["EyeBlinkLeft"]
                # 角度まだ
                blink_l_Angle = mapping(blink_l, 0.0, 0.9, 110.0, 180.0)
                RC_ServoAngles[4]=blink_l_Angle
                EyeStateChanged=True

            if face_data == "EyeBlinkRight":
                blink_r = data_json["EyeBlinkRight"]
                blink_r_Angle = mapping(blink_r, 0.0, 0.9, 70.0, 0.0)
                RC_ServoAngles[5]=blink_r_Angle
                EyeStateChanged=True

            # 右目の動きのどちらかを検知
            # 右目の外側の動きのデータがあり、かつ０以上
            if  face_data == "EyeLookOutRight" and data_json["EyeLookOutRight"]>=0.0:
                eye_outside_R = data_json["EyeLookOutRight"]
                eye_outside_Rmapping = mapping(eye_outside_R, 0.0, 0.9, 90.0, 43.0)
                RC_ServoAngles[1]=eye_outside_Rmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookInRight" and data_json["EyeLookInRight"]>=0.0:
                eye_inside_R = data_json["EyeLookInRight"]
                eye_inside_Rmapping = mapping(eye_inside_R, 0.0, 0.9, 90.0, 120.0)
                RC_ServoAngles[1]=eye_inside_Rmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の外側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookOutLeft" and data_json["EyeLookOutLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookOutLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,74.0, 120.0 )
                RC_ServoAngles[0]=eye_outside_Lmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data =="EyeLookInLeft"and data_json["EyeLookInLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookInLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,74.0, 20.0 )
                RC_ServoAngles[0]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の上の動きのデータがあり、かつ０以上
            if face_data == "EyeLookUpLeft" and data_json["EyeLookUpLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookUpLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,90.0, 46.0 )
                RC_ServoAngles[2]=eye_outside_Lmapping
                EyeStateChanged=True
            # 左目の下の動きのデータがあり、かつ０以上
            if face_data =="EyeLookDownLeft"and data_json["EyeLookDownLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookDownLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9, 90.0, 120.0)
                RC_ServoAngles[2]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の外側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookUpRight" and data_json["EyeLookUpRight"]>=0.0:
                eye_outside_L = data_json["EyeLookUpRight"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,100.0, 120.0 )

                RC_ServoAngles[3]=eye_outside_Lmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data =="EyeLookDownRight"and data_json["EyeLookDownRight"]>=0.0:
                eye_outside_L = data_json["EyeLookDownRight"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,100.0, 73.0 )
                RC_ServoAngles[3]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            if EyeStateChanged:
                EyeStateChanged = False
                # シリアルでRCサーボの角度をマイコン経由で設定
                # serial_communication(int(RC_ServoAngles[0]),int(RC_ServoAngles[1]),int(RC_ServoAngles[2]),int(RC_ServoAngles[3]))
                serial_communication(int(RC_ServoAngles[0]),int(RC_ServoAngles[1]),int(RC_ServoAngles[2]),int(RC_ServoAngles[3]),int(RC_ServoAngles[4]),int(RC_ServoAngles[5]),int(RC_ServoAngles[6]))
                res = EyeBallBoard.read_all()
                print(res)
                    





        # クライアントでechoを付けて再送信する。
        # await websocket.send(data_json)

if __name__ == "__main__":
    print("Activate Server")


    print("Set Serial, and reading config file")

    # Configファイルで実行する場合
    # config = ConfigParser()
    # config.read('Python/config.ini')
    # section = 'development'
    # ip = config.get(section, 'ipaddr')
    # port = int(config.get(section, 'port'))

    ip = socket.gethostbyname(socket.gethostname())
    port = 9998
    print(f"Server start: {ip}:{port}")
    decoder = json.JSONDecoder()
    # WebSocketサーバー生成。ホストはlocalhost、portに生成する。
    start_server = websockets.serve(accept, ip, port)

    # 非同期でサーバを待機する。
    asyncio.get_event_loop().run_until_complete(start_server)
    asyncio.get_event_loop().run_forever()


    