import asyncio
from asyncio.windows_events import NULL
# WebSocketモジュールを宣言する。
import websockets
# クライアント接続すると呼び出す。
import json
from Rcb4Lib.Rcb4BaseLib import Rcb4BaseLib
from configparser import ConfigParser

# IPアドレス取得用
import socket
# シリアル通信用
import serial


Eye_rotations = [90,90,90,90]
bias_angle = [0,0]

# Arduino
ArduinoPort = "COM4"
RCB4hvPort = "COM3"

EyeBallBoard = serial.Serial(ArduinoPort, 115200,timeout=3)


def mapping(x, in_min, in_max, out_min, out_max):
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min

def serial_communication(data1, data2,data3,data4):
    EyeBallBoard.write(b'a')   #データ送信合図
    EyeBallBoard.write(bytes([data1]))
    EyeBallBoard.write(bytes([data2]))
    EyeBallBoard.write(bytes([data3]))
    EyeBallBoard.write(bytes([data4]))
    print(data1, data2,data3, data4)

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
                # angle = 8000
                # if jaw > 0.08:
                #     angle = 7400
                
                jaw_angle = mapping(jaw, 0.5, 0.0, 0.0, 1500.0)
                jaw_angle += 6500
                print(int(jaw_angle))
                rcb4.setSingleServo(2, 1, int(jaw_angle), 2)
            if face_data == "EyeBlinkLeft":
                blink_l = data_json["EyeBlinkLeft"]
                blink_l_anlge = mapping(blink_l, 0.0, 0.9, 7500, 10000)
                rcb4.setSingleServo(0, 1, int(blink_l_anlge), 2)
                print(blink_l)
            if face_data == "EyeBlinkRight":
                blink_r = data_json["EyeBlinkRight"]
                blink_r_anlge = mapping(blink_r, 0.0, 0.9, 7500, 4500)
                rcb4.setSingleServo(1, 1, int(blink_r_anlge), 2)
                print(blink_r)

            # if  face_data == "EyeLookOutRight":
            #     eye_outside_R = data_json["EyeLookOutRight"]
            #     if eye_outside_R > 0.5:
            #         Eye_rotations[0] = 20
            #         Eye_rotations[1] = 150
            #     else:
            #         Eye_rotations[0] = 90
            #         Eye_rotations[1] = 90
            #     EyeStateChanged = True

            # 右目の動きのどちらかを検知
            # 右目の外側の動きのデータがあり、かつ０以上
            if  face_data == "EyeLookOutRight" and data_json["EyeLookOutRight"]>=0.0:
                eye_outside_R = data_json["EyeLookOutRight"]
                eye_outside_Rmapping = mapping(eye_outside_R, 0.0, 0.9, 90, 43)
                Eye_rotations[1]=eye_outside_Rmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookInRight" and data_json["EyeLookInRight"]>=0.0:
                eye_inside_R = data_json["EyeLookInRight"]
                eye_inside_Rmapping = mapping(eye_inside_R, 0.0, 0.9, 90, 120)
                Eye_rotations[1]=eye_inside_Rmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の外側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookOutLeft" and data_json["EyeLookOutLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookOutLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,74.0, 120.0 )
                Eye_rotations[0]=eye_outside_Lmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data =="EyeLookInLeft"and data_json["EyeLookInLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookInLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,74.0, 20.0 )
                Eye_rotations[0]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の上の動きのデータがあり、かつ０以上
            if face_data == "EyeLookUpLeft" and data_json["EyeLookUpLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookUpLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,90.0, 46.0 )
                Eye_rotations[2]=eye_outside_Lmapping
                EyeStateChanged=True
            # 左目の下の動きのデータがあり、かつ０以上
            if face_data =="EyeLookDownLeft"and data_json["EyeLookDownLeft"]>=0.0:
                eye_outside_L = data_json["EyeLookDownLeft"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9, 90.0, 120.0)
                Eye_rotations[2]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            # 左目の動きのどちらかを検知
            # 左の外側の動きのデータがあり、かつ０以上
            if face_data == "EyeLookUpRight" and data_json["EyeLookUpRight"]>=0.0:
                eye_outside_L = data_json["EyeLookUpRight"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,100.0, 120.0 )
                Eye_rotations[3]=eye_outside_Lmapping
                EyeStateChanged=True
            # 右目の内側の動きのデータがあり、かつ０以上
            if face_data =="EyeLookDownRight"and data_json["EyeLookDownRight"]>=0.0:
                eye_outside_L = data_json["EyeLookDownRight"]
                eye_outside_Lmapping = mapping(eye_outside_L, 0.0, 0.9,100.0, 73.0 )
                Eye_rotations[3]=eye_outside_Lmapping
                # データを送るフラグを立てる
                # // フラグを立てるのは、左目の更新をしてから動かすため
                EyeStateChanged=True

            if EyeStateChanged:
                EyeStateChanged = False
                # シリアルでRCサーボの角度をマイコン経由で設定
                serial_communication(int(Eye_rotations[0]),int(Eye_rotations[1]),int(Eye_rotations[2]),int(Eye_rotations[3]))


        # クライアントでechoを付けて再送信する。
        # await websocket.send(data_json)

if __name__ == "__main__":
    print("Activate Server")
    
    rcb4 = Rcb4BaseLib()
    rcb4.open(RCB4hvPort, 115200, 1.3)


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


    