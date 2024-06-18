자료구조의 종류
    1. 스택 (Stack)

    스택은 LIFO(Last In, First Out) 구조를 가진 자료구조입니다. 즉, 마지막에 삽입된 요소가 가장 먼저 제거됩니다. 스택은 다음과 같은 연산을 지원합니다:

        push: 스택의 맨 위에 요소를 추가합니다.
        pop: 스택의 맨 위 요소를 제거하고 반환합니다.
        peek: 스택의 맨 위 요소를 제거하지 않고 반환합니다.
        isEmpty: 스택이 비어 있는지 확인합니다.

    스택의 사용 예로는 함수 호출 시의 호출 스택, 후위 표기법 계산, 브라우저의 뒤로 가기 기능 등이 있습니다.

    자료구조는 데이터의 저장, 조직화, 관리 및 접근 방식을 정의하는 데 사용되는 방법들입니다. 여기서는 스택(stack), 큐(queue), 연결 리스트(linked list), 트리(tree), 그래프(graph)에 대해 설명하겠습니다.

    C언어에서는 메모리상에서 존재하는 모든 데이터의 시작주소와 데이터크기를 알면 generic프로그램을 사용할수 있다.



    2. 큐 (Queue)

    큐는 FIFO(First In, First Out) 구조를 가진 자료구조입니다. 즉, 먼저 삽입된 요소가 가장 먼저 제거됩니다. 큐는 다음과 같은 연산을 지원합니다:

        enqueue: 큐의 끝에 요소를 추가합니다.
        dequeue: 큐의 앞 요소를 제거하고 반환합니다.
        front: 큐의 앞 요소를 제거하지 않고 반환합니다.
        isEmpty: 큐가 비어 있는지 확인합니다.

    큐의 사용 예로는 프린터 대기열, 운영 체제의 태스크 스케줄링, 너비 우선 탐색(BFS) 등이 있습니다.

    3. 연결 리스트 (Linked List)

    연결 리스트는 각 요소가 노드로 구성되며, 각 노드는 데이터와 다음 노드를 가리키는 포인터를 포함합니다. 주요 유형으로는 단일 연결 리스트, 이중 연결 리스트, 원형 연결 리스트가 있습니다.

        단일 연결 리스트: 각 노드는 다음 노드에 대한 포인터를 가집니다.
        이중 연결 리스트: 각 노드는 다음 및 이전 노드에 대한 포인터를 가집니다.
        원형 연결 리스트: 마지막 노드는 첫 번째 노드를 가리킵니다.

    연결 리스트는 동적 크기를 가지며, 배열과 달리 요소를 삽입하거나 삭제할 때 인덱스를 재조정할 필요가 없습니다.

    4. 트리 (Tree)

    트리는 계층적 구조를 가지는 비선형 자료구조입니다. 주요 용어는 다음과 같습니다:

        루트 (Root): 트리의 최상위 노드.
        노드 (Node): 트리의 각 요소.
        자식 (Child): 특정 노드로부터 직접 연결된 하위 노드.
        부모 (Parent): 특정 노드로부터 직접 연결된 상위 노드.
        잎 (Leaf): 자식이 없는 노드.

    트리의 종류에는 이진 트리, 이진 탐색 트리, AVL 트리, 힙 등이 있습니다. 트리는 파일 시스템, 데이터베이스 인덱스, 신경망 구조 등에서 사용됩니다.

    5. 그래프 (Graph)

    그래프는 정점(노드)과 그 정점들을 연결하는 간선(엣지)으로 구성된 자료구조입니다. 그래프는 다음과 같은 특성을 가질 수 있습니다:

        무방향 그래프: 간선이 방향을 가지지 않습니다.
        유방향 그래프: 간선이 방향을 가집니다.
        가중치 그래프: 간선에 가중치가 할당됩니다.

    그래프는 도로 네트워크, 소셜 네트워크, 전자 회로 등 다양한 응용 분야에서 사용됩니다. 주요 알고리즘으로는 깊이 우선 탐색(DFS), 너비 우선 탐색(BFS), 다익스트라 알고리즘 등이 있습니다.

    각 자료구조는 특정 문제 해결에 적합하며, 선택 및 구현은 문제의 특성과 요구 사항에 따라 다릅니다.



