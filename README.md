# 概要

### ロボットシステム学 課題1

スイッチ入力とLEDの点灯、消灯ができるデバイスドライバの作成

# 開発環境

Ubuntu20.04

Raspberry Pi 4

# 使用した物

ブレッドボード ×１

ジャンパー線（オスメス）×2

LED ×1

抵抗 200Ω ×1

# 回路
### 全体図

<img src="https://user-images.githubusercontent.com/97030413/148578084-42e949f7-43a5-48d0-949b-9df2f3268ddf.jpeg" width=320>配線の全体図

<img src="https://user-images.githubusercontent.com/97030413/148580509-0151d45c-7558-488b-8692-8948acb0a6ad.jpeg" width=320>ラズパイの配線

<img src="https://user-images.githubusercontent.com/97030413/148580533-3eb21421-c7b9-44e5-a5c7-8e0fdec08625.jpeg" width=320>ブレッドボードの配線

### 回路図
<img src="https://user-images.githubusercontent.com/97030413/148579748-4dc27a1d-b667-462c-8dcd-537b0410ab4a.jpg" width=320>


# 基本的な動作

### ラズパイを用いたLED点灯プログラム。
 ```
make
 ```
 ```
sudo insmod myled.ko
 ```
 ```
sudo rmmod myled
 ```
 ```
sudo insmod myled.ko
 ```
 ```
sudo chmod 666 /dev/myled0
 ```
点灯
 ```
echo 1 > /dev/myled0
 ```
 消灯
 ```
echo 0 > /dev/myled0
 ```

# 協力してくれた方

Thanks for Hiroyuki Matsuda

URL https://github.com/hiro2001

 # ライセンス

Copyright (c) 2021 Ryuich Ueda


Copyright (c) 2021 Kazuma Toyoshima

> This program is free software; you can redistribute it and/or
> modify it under the terms of the GNU General Public License
> as published by the Free Software Foundation; either version 2
> of the License, or any later version.

> This program is distributed in the hope that it will be useful,
> but WITHOUT ANY WARRANTY; without even the implied warranty of
> MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
> GNU General Public License for more details.

> You should have received a copy of the GNU General Public License
> along with this program. If not, see http://www.gnu.org/licenses/.
