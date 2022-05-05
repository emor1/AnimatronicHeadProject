import asyncio
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


Eye_rotations = []

def _map(x, in_min, in_max, out_min, out_max):
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min


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
                
                jaw_angle = _map(jaw, 0.5, 0.0, 0.0, 1500.0)
                jaw_angle += 6500
                print(int(jaw_angle))
                rcb4.setSingleServo(2, 1, int(jaw_angle), 2)
            if face_data == "EyeBlinkLeft":
                blink_l = data_json["EyeBlinkLeft"]
                blink_l_anlge = _map(blink_l, 0.0, 0.9, 7500, 10000)
                rcb4.setSingleServo(0, 1, int(blink_l_anlge), 2)
                print(blink_l)
            if face_data == "EyeBlinkRight":
                blink_r = data_json["EyeBlinkRight"]
                blink_r_anlge = _map(blink_r, 0.0, 0.9, 7500, 4500)
                rcb4.setSingleServo(1, 1, int(blink_r_anlge), 2)
                print(blink_r)

            if face_data == "EyeLookOutRight":
                eye_outside_R = data_json["EyeLookOutRight"]


            if EyeStateChanged:
                eye_outside_R
                serial_communication(Eye_rotations[0],Eye_rotations[1])


        # クライアントでechoを付けて再送信する。
        # await websocket.send(data_json)

if __name__ == "__main__":
    print("Activate Server")
    rcb4 = Rcb4BaseLib()
    rcb4.open("COM12", 115200, 1.3)

    EyeBallBoard = serial.Serial("COM13", 115200,timeout=3)

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

def serial_communication(data1, data2):
    EyeBallBoard.write(bytes([0]))
    EyeBallBoard.write(bytes([data1]))
    EyeBallBoard.write(bytes([data2]))
    