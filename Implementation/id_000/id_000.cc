// ID_000: Insert Student

// This function changes /n to /0.
void changeChar(char *namechar){
  for(int i=0; i<strlen(namechar); i++){
    if(namechar[i]=='\n') namechar[i]='\0';
  }
}

char* rline(char* dst, FILE* stream){
  char* aux =fgets(dst, 50, stream);
  if(aux!=NULL){
    changeChar(aux);
  }
  return aux;
}

// This function creates an auxiliar student that we'll send to INSERT_STUDENT.
Student newStudent(){
  Student aux;
  char dni[50];
  char name[50];
  char surname[50];
  char address[50];
  char email[50];
  char birthdate[50];

  printf("Introduce DNI:\n");
  rline(aux.dni, stdin);
  printf("Introduce NAME:\n");
  rline(aux.name, stdin);
  printf("Introduce SURNAME:\n")
  rline(aux.surname, stdin);
  printf("Introduce ADDRESS:\n");
  rline(aux.address, stdin);
  printf("Introduce EMAIL:\n");
  rline(aux.email, stdin);
  printf("Introduce BIRTH DATE:\n");
  rline(aux.birthdate, stdin);
  printf("Introduce PHONE NUMBER:\n");
  scanf("%d", &aux.phonenumber);
  printf("Introduce HIGHEST COURSE REGISTERED:\n");
  scanf("%d", %aux.course);
  printf("Introduce TEAM NUMBER:\n");
  scanf("%d", %aux.teamnumber);
  printf("Introduce ROLE:\n");
  scanf("%d", %aux.role);

  return aux;
}

void INSERT_STUDENT(char *namefile){

  std::ofstream f;
  f.open(namefile, std:ios::out); // Opens file in write mode.
  Student aux = newStudent();
  f << aux << '\n' // Adds new student at the end of the file.
  fclose(f);

}
