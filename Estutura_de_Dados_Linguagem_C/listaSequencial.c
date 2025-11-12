struct lista{
    int qtd;
    struct aluno dados[MAX];
};

Lista * criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof( struct lista));
    if (li != NULL)
        li->qtd = 0;
    return li;
}