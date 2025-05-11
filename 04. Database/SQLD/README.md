## 2025 SQLD SQL 개발자

### 학습을 위한 세팅
- [Oracle Onlien IDE](https://livesql.oracle.com/ords/f?p=590:1000:115138537772526::LEVEL1:::)
- [Oracle 21c Download](https://www.oracle.com/database/technologies/oracle21c-windows-downloads.html) : Mac의 경우 공식지원하지 않아 docker 등의 환경으로 테스팅

### Windows 세팅

<br>

1. 설치 이후 CMD 확인
```cmd
sqlplu / as sysbda
```

<br>

2. Oracle 클라이언트가 데이터베이스에 연결할 수 있도록 도와주는 네트워크 접속 정보

    - 위치 : C:\app\<USERNAME>\product\21c\homes\OraDB21Home1\network\admin\tnsnames.ora
    ```
    XPDB = 
        (DESCRIPTION = 
            (ADDRESS = (PROTOCOL = TCP)(HOST = localhost)(PORT = 1521))
            (CONNECT_DATA = 
                (SERVER = DEDICATED)
                (SERVICE_NAME = XEPDB1)
            )
        )
    ```

    - 상세 정보

    |값|설명|예시|
    |:---:|:---|:---|
    |XPDC|접속 이름(Alias)| sqlplus system/password@XPDB|
    |PROTOCOL|사용하고자 하는 프로토콜||
    |HOST|데이터베이스가 설치된 컴퓨터 주소||
    |PORT|사용하고자 하는 포트 번호||
    |SERVER|전서버 프로세스 방식|DEDICATED(전용), SHARED(공유)|
    |SERVICE_NAME|접속할 PDB(Pluggable Database) 이름||

    - 설정이후 : `sqlplus system/oracle@XPDB` 로 사용할 수 있음

<br>

### 학습을 위한 신규 사용자 생성

<br>

1. SQL Plus 접속
```
sqlplus / as sysdba
```
2. 신규 사용자 생생
```sql
create user c##<username> identified by <password>;
```
3. 권한 부여하기
```sql
grant dba to c##<username>;
```
- 21c 버전 이후부터는 공통 유저를 생성하고자 할때 계정명 앞에 'c##"을 붙여야 함.