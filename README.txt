1. 在catch handler外執行empty throw會直接terminate程式
2. 不會 compiler把3.0當成double 所以沒有catch handler能catch到exception 所以呼叫terminate
3. new失敗會output No memory 
   compile: 打make
   running script:
   Script started on 2015年06月22日 (週一) 18時20分18秒
^[]0;F74036459@2015cpp: ~/lab8^GF74036459@2015cpp:~/lab8$ ./tetris^M
No memory^M
^[]0;F74036459@2015cpp: ~/lab8^GF74036459@2015cpp:~/lab8$ exit^M

Script done on 2015年06月22日 (週一) 18時20分24秒

