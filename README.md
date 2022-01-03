
# 開発環境:
Ubuntu20.04

Raspberry Pi 4

# 基本的な動作：
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

 # ライセンス

Copyright (c) 2021 Ryuich Ueda


Copyright (c) 2021 Hiroyuki Matsuda

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
