# SICP（《计算机程序的构造和解释》）

centos7下的scheme配置：
1.进入src文件夹，运行./configure，会自动检查安装需要的环境，根据提示进行相应安装

如果出现error：m4 not found（我碰到了这个问题），请执行下面的命令：
yum install m4，重新执行./configure

2.make install

***
Solutions：http://community.schemewiki.org/?sicp-solutions

Python电子版：

原版（CS61A: Online Textbook）：http://www-inst.eecs.berkeley.edu/~cs61a/sp12/book/

中文版：https://legacy.gitbook.com/book/wizardforcel/sicp-py/details

***
# scheme新手入门：

1.vim sum.scm 文件，内容为“(define (sum a b) (+ a b))”

2.(cf "sum")

3.(load "test.scm")  

4.接下来就可以使用文件内定义的sum函数

5.当时折腾了好久，太蠢了，没有善用搜索
