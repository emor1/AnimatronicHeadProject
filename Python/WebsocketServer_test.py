import asyncio
# WebSocketモジュールを宣言する。
import websockets
# クライアント接続すると呼び出す。
import json
from Rcb4Lib.Rcb4BaseLib import Rcb4BaseLib
from configparser import ConfigParser


rcb4 = Rcb4BaseLib()
rcb4.open("COM11", 115200, 1.3)


def _map(x, in_min, in_max, out_min, out_max):
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min


async def accept(websocket, path):
    # 無限ループ
    while True:
        # クライアントからメッセージを待機する。
        data = await websocket.recv()
        # コンソールに出力
        data_json = json.loads(data)
        for face_data in data_json:
            if face_data == "JawOpen":
                jaw = data_json["JawOpen"]
                # angle = 8000
                # if jaw > 0.08:
                #     angle = 7400
                
                jaw_angle = _map(jaw, 0.5, 0.0, 0.0, 1500.0)
                jaw_angle += 6500
                # print(int(jaw_angle))
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
        # クライアントでechoを付けて再送信する。
        # await websocket.send(data_json)


config = ConfigParser()
config.read('config.ini')
section = 'development'
ip = config.get(section, 'ipaddr')
port = int(config.get(section, 'port'))

decoder = json.JSONDecoder()
# WebSocketサーバー生成。ホストはlocalhost、portに生成する。
start_server = websockets.serve(accept, ip, port)

# 非同期でサーバを待機する。
asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
