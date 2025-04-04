//int exec_system(const char *cmd){
//	pid_t pid;
//	int status;
//
//	printf("exec_system [%d] !!!... \n", __LINE__);
//	if(cmd == NULL) return 1;       //UNIX에는 명령 처리기가 존재
//	printf("exec_system [%d] !!!... \n", __LINE__);
//	if((pid = fork()) < 0){
//		return -1;    //프로세스 생성 에러
//	}
//	
//	printf("exec_system [%d] !!!... \n", __LINE__);
//	if(pid == 0){     //자식 프로세스
//	printf("exec_system [%d] !!!... \n", __LINE__);
//		execl("/bin/sh","sh","-c",cmd,(char*)0);
//	//	_exit(127);		//위 2번읜 case
//		printf("child !!!... \n");
//	}else{                  //부모 프로세스 : 자식이 끝날때까지 기다림
//	printf("exec_system [%d] !!!... \n", __LINE__);
//		while(waitpid(pid, &status, 0) < 0){
//			if(errno != EINTR){	//위 1번의 case
//	printf("exec_system [%d] !!!... \n", __LINE__);
//				status = -1;
//				break;
//			}
//			printf("parents.... \n");
//		}
//	}
//	printf("exec_system [%d] !!!... \n", __LINE__);
//	return status;
//}
