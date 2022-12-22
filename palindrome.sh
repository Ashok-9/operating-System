echo "enter a number"
read n
#1st method
a=$( echo $n | rev)
echo $a
if [ $a -eq $n ]
then 
echo "palindrome"
else
echo "not palindrome"
fi


#w2nd method
b=$n
echo $b
while [ $b -gt 0 ]
do 

r=$(( $b%10 ))
b=$(( $b/10 ))

p=$( echo $r$p)
done
if [ $a -eq $p ]
then 
echo "palindrome"
else
echo "not palindrome"
fi