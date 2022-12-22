echo "enter a number"
read n
for((row=1;row<=n;row++))
do
f=1
for ((i=1;i<=row;i++))
do
f=$((i*f))
done
echo "$f "
done