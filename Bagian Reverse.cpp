char *reverse(char *carikata){
    static char carikarakter[cols];
    int bagian2 = 0;
    for (int i = (strlen(carikata)-1); i >= 0; i--){
        carikarakter[bagian2] = *(carikata+i);
        bagian2++;
    }

  return carikarakter;
}
