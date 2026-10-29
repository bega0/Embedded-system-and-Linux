
#!/usr/bin/env bash

echo "当前用户：$USER"
echo "当前目录：$PWD"
echo "当前 Shell 的 PID：$$"

echo "----- PATH -----"
echo "$PATH"

echo "----- 当前脚本权限 -----"
ls -l inspect.sh

echo "----- 进程信息 -----"
ps -p $$ -o pid,ppid,comm

