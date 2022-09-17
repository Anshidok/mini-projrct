echo "enter the number of lines"
read nm
i=1
j=1

while [ $i -le $nm ]
do
	while [ $j -le $i ]
	do
	echo "*  "
	j=`expr $j + 1`
	done


i=`expr $i + 1`
done
