
void logon();
void write_prompt();
void process_input(string input);

void logon() {
    set_this_player(this_object());
    write_prompt();
}

void write_prompt() {
    write("> ");
}

void process_input(string input) {
    printf("%O\n", input);
}
