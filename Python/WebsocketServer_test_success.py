import asyncio
# WebSocketモジュールを宣言する。
import websockets
# クライアント接続すると呼び出す。
import json
from configparser import ConfigParser
import socket


async def accept(websocket, path):
    # 無限ループ
    while True:
        # クライアントからメッセージを待機する。
        data = await websocket.recv()
        # コンソールに出力
        data_json = json.loads(data)
        for face_data in data_json:
            if face_data == "JawOpen":
                print(data_json["JawOpen"])
        # クライアントでechoを付けて再送信する。
        # await websocket.send(data_json)


# config = ConfigParser()
# config.read('config.ini')
# section = 'development'
# ip = config.get(section, 'ipaddr')
# port = int(config.get(section, 'port'))
ip = socket.gethostbyname(socket.gethostname())
port = 9998
decoder = json.JSONDecoder()
# WebSocketサーバー生成。ホストはlocalhost、portは9998に生成する。
start_server = websockets.serve(accept, ip, port)

# 非同期でサーバを待機する。
asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
