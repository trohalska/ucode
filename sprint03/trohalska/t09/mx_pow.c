double mx_pow(double n, unsigned int pow){
    unsigned int i = 2;
    double m = n; 
    if (pow == 0)
        n = 1;
    while (i <= pow){
        n = n * m;
        i++;
    }
    return n;    
}
