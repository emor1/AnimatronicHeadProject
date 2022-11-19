"""
Websocketのクライアント管理用

Python: クライアント
Unity : サーバー
"""
import asyncio
import websockets
import json
import time

class WsClientManager():
    def __init__(self, uri="ws://localhost:9998"):
        self.loop = asyncio.get_event_loop()
        # 接続
        self.uri = uri
        self.ws = self.loop.run_until_complete(websockets.connect(uri))
    # 送信
    def send(self, data):
        self.loop.run_until_complete(self.ws.send(data))
    
    def close(self):
        # 終了
        self.loop.run_until_complete(self.ws.close())
        self.loop.close()
        print("Finish.")

if __name__ == "__main__":
    ws_manager = WsClientManager(uri="ws://192.168.11.19:9998")

    print("Start")
    # ws_manager.send(json.dumps({"JawOpen": 0.0,}))
    # time.sleep(5)
    ws_manager.send(json.dumps({"JawOpen": 0.9,"EyeLookUpRight":0.9,"EyeLookUpLeft":0.9}))
    time.sleep(5)
    ws_manager.send(json.dumps({"JawOpen":0.05,"EyeLookUpRight":0,"EyeLookUpLeft":0}))
    time.sleep(1)
    # ws_manager.send(json.dumps({"EyeBlinkRight":1.0,"EyeBlinkLeft":1.0,"JawOpen":0.0,}))
    ws_manager.close()
