# c-
#int main ( int argc, char* argv[] ){

    int a;
    std:: cin >> a;
    
    std:: cout << a << std::endl;
    std:: cout << "HelloWorld" << std::endl;
    std::cerr << "ERROR" << std:: endl;
    int nail[9];

    for (int i=0; i < 9; i++){
        nail[i] = i;
    }
    for (int i=0; i < 9; i++){
        std:: cout << " nail [ " << i << " ] =  " << nail[i] << "\n";
    }
    for (int i=0; i < argc; i++){
        std:: cout <<  " argv [ " << i << " ] =  " << argv[i] << "\n";
    }
    return a;
}