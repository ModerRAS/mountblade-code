#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[10000];
    
    fp = fopen("99_unmatched_functions.c", "r");
    if (fp == NULL) {
        printf("无法打开文件\n");
        return 1;
    }
    
    FILE *temp = fopen("temp.c", "w");
    if (temp == NULL) {
        printf("无法创建临时文件\n");
        fclose(fp);
        return 1;
    }
    
    while (fgets(line, sizeof(line), fp)) {
        // 替换 UNK_180a02c98
        char *pos = strstr(line, "&UNK_180a02c98");
        if (pos != NULL) {
            strncpy(pos, "XmlFormatStringAttributeAddress", strlen("XmlFormatStringAttributeAddress"));
        }
        fputs(line, temp);
    }
    
    fclose(fp);
    fclose(temp);
    
    // 替换原文件
    remove("99_unmatched_functions.c");
    rename("temp.c", "99_unmatched_functions.c");
    
    printf("替换完成\n");
    return 0;
}