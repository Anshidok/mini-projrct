echo "Enter limit "
read limit

count=1
large=0

while [ $limit -gt 0 ]
do
	echo "Enter the number $count "
	read num
	
	if [ $num -gt $large ]
	then
		large=$num
	
	fi 
	
	
	limit=`expr $limit - 1`
	count=`expr $count + 1`
done

echo " the largest number = $large"
