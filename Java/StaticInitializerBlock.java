// This is just the class body and not the main method.

static int B,H;
static boolean flag ;

static {
    Scanner scan = new Scanner(System.in);
    B = scan.nextInt();
    H = scan.nextInt();
    if( B <=0 || H <= 0){
        System.out.println("java.lang.Exception: Breadth and height must be positive");
        flag = false;
    }
    else{
        flag = true;
    }
}
