CC = gcc #컴파일러를 나타내는 변수 
CFLAGS = -c -Wall #컴파일러옵션을 나타내는 변수 
LFLAGS = -lm #링커옵션을 나타내는 변수 
DEPS = manager.h product.h #의존성 파일을 나타내는 변수 
OBJ = manager.o product.o #컴파일된 오브젝트파일을 나타내는 변수 
%.o: %.c $(DEPS) #패턴규칙(모든 .c파일에 대해 .o파일을 만듦
	$(CC) $(CFLAGS) -o $@ $<
market: $(OBJ) market.o #market이라는 실팽파일을 만드는 규칙 
	$(CC) -o $@ $^ $(LFLAGS)
clean:
	rm -f *.o market
