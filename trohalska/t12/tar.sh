if [ "$1" = "-c" ];
then tar -cf $2 $3 $4 $5 $6;
rm -r $3 $4 $5 $6;
elif [ "$1" = "-e" ];
then tar -xf $2;
fi 
