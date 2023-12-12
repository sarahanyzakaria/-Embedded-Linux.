#!/bin/bash
sudo useradd Sara_Hany
sudo groupadd Zakaria
sudo usermod -aG Zakaria Sara_Hany
# checking on user and group
echo
if grep -q "Zakaria" /etc/group; then
	echo "the group is exist"
echo 
else
	echo "the group is not exist"
fi
echo
if grep -q "Sara_Hany" /etc/passwd; then
	echo "the user is exist"
echo
else 
	echo "the user is not exist"
fi
echo
echo "information of user:"
cat/etc/passwd | grep Sara_Hany
echo
echo
echo "information of group:"
cat/etc/group | grep Zakaria

