//pseudocode
void Unweighted(Table T) // Assume T is initialized
{
    int CurrDist;
    Vertex V, W;

    for(CurrDist = 0; CurrDist < NumVertex; CurrDist++) {
        for each vertex V
            if (!T[V].Known && T[V].Dist == CurrDist) {
                T[V].Known = True;
                for each W adjacent to V
                    if (T[W].Dist == Infinity) {
                        T[W].Dist = CurrDist + 1;
                        T[W].Path = V;
                    }
            }
    }
}

//pseudocode opt for unweighted
void Unweighted(Table T)
{
    Queue Q;
    Vertex V, W;

    Q = CreateQueue(NumVertex);
    MakeEmpty(Q);

    //Enqueue the start vertex S, determined elsewhere
    Enqueue(S, Q);

    while (!IsEmpty(Q))
    {
        V = Dequeue(Q);
        T[V].Known = True;

        for each W adjacent to V
            if (T[W].Dist == Infinity)
            {
                T[W].Dist = T[V].Dist + 1;
                T[W].Path = V;
                Enqueue(W, Q);
            }
    }
    DisposeQueue(Q);
}

