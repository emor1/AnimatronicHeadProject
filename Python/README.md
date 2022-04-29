# サーバーを起動する

# 概要
アニマトロニクスのサーバーである
[Animatronic Server](AnimatronicServer.py)を起動することで
様々なアプリケーションからアニマトロニクスの操作が可能になる。



## フォルダー構成
Python
├ [Rcb4Lib/](https://kondo-robot.com/faq/rcb-4-library-p100b) //近藤科学の   Rcb4のPythonライブラリの中のRcb4Libフォルダをここに配置する
├ AnimatronicServer.py
└ WebsocketServer_test_success.py

## 環境
* Python 3.7.9
  
# Pythonライブラリ
以下のライブラリが必要になる。また必要なライブラリは[requirement.txt](requirement.txt)にまとめてある。
* configparser==5.2.0
* pyserial==3.5
* websockets==10.3


# Server使い方

1. DUAL USB Adapter HSをSerialモードにして接続
2. COM番号を確認
3. [Animatronic Server](AnimatronicServer.py)を実行する
4. アプリケーションを実行し、コンソールに表示されるIPアドレスを入力して接続する

## Unityアプリケーションの例




## config.iniの構成
[development]
ipaddr = <"ip address">
port = \<port number>

