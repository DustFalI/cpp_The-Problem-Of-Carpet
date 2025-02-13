# cpp_The-Problem-Of-Carpet
C++练习 地毯问题

# P1228 地毯填补问题

题目描述：
相传在一个古老的阿拉伯国家里，有一座宫殿。宫殿里有个四四方方的格子迷宫，国王选择驸马的方法非常特殊，也非常简单：公主就站在其中一个方格子上，只要谁能用地毯将除公主站立的地方外的所有地方盖上，美丽漂亮聪慧的公主就是他的人了。公主这一个方格不能用地毯盖住，毯子的形状有所规定，只能有四种选择（如图）：
并且每一方格只能用一层地毯，迷宫的大小为 $2^k\times 2^k$ 的方形。当然，也不能让公主无限制的在那儿等，对吧？由于你使用的是计算机，所以实现时间为 $1$ 秒。

输入格式：
输入文件共 2 行。
第一行一个整数 k，即给定被填补迷宫的大小为 2^k * 2^k（0<k≤10）。
第二行两个整数 x,y，即给出公主所在方格的坐标（$x$ 为行坐标，$y$ 为列坐标），x 和 y 之间有一个空格隔开。

输出格式：
将迷宫填补完整的方案：每一补（行）为 $x\ y\ c$（$x,y$ 为毯子拐角的行坐标和列坐标，$c$ 为使用毯子的形状，具体见上面的图 $1$，毯子形状分别用 $1,2,3,4$ 表示，$x,y,c$ 之间用一个空格隔开）。

思路：
拆分，如果是2*2，确定障碍物的位置，在其对角位置防止，需要分4种情况判断，左上，右上，左下，右下。
如果是4*4，用中间的四坐标确定障碍物的位置，这里统一用左上角当做参考
![image](https://github.com/user-attachments/assets/fe5862be-ce05-4550-944c-0bc390793903)
