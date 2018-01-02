hashcheck(char* email)
{
  //user the haveibeenpwned api to check email for breaches
  //https://haveibeenpwned.com/API/v2#UserAgent
  //below code modified from https://stackoverflow.com/questions/11208299/http-get-request-using-c-without-libcurl
  //char sendline[MAXLINE + 1], recvline[MAXLINE + 1];
  char* ptr;
  char* emailPass;
  emailPass = ("GET https://haveibeenpwned.com/api/v2/breachedaccount/%s", email);
  printf("%s\n", emailPass);
  size_t n;

  /// Form request
  //snprintf(sendline, MAXSUB, 
  //   emailPass,
  //   "User-Agent: cu-hash-checker"
 //    "%s\r\n", page, host, (unsigned int)strlen(poststr), poststr);

  /// Write the request
  //if (write(sockfd, sendline, strlen(sendline))>= 0) 
  //{
      /// Read the response
  //    while ((n = read(sockfd, recvline, MAXLINE)) > 0) 
  //    {
  //        recvline[n] = '\0';
//
  //        if(fputs(recvline,stdout) == EOF) { cout << ("fputs erros"); }
    //      /// Remove the trailing chars
      //    ptr = strstr(recvline, "\r\n\r\n");

          // check len for OutResponse here ?
//          snprintf(OutResponse, MAXRESPONSE,"%s", ptr);
  //    }          
  //}
}