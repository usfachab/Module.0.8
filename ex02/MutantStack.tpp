// template <typename T>
// MutantStack<T>::MutantStack()
// {
//     _stack = new std::deque<T>();
// }

// template <typename T>
// MutantStack<T>::MutantStack( const MutantStack& obj )
// {
//     *this = obj;
// }

// template <typename T>
// MutantStack<T>& MutantStack<T>::operator=( const MutantStack& rhs )
// {
//     _stack = new std::deque<T>();

//     std::deque<int>::iterator it = rhs._stack->begin();

//     for ( ; it != rhs._stack->end(); ++it )
//         _stack->push_back( *it );

//     return ( *this );
// }

// template <typename T>
// MutantStack<T>::~MutantStack()
// {
//     delete _stack;
// }

// template <typename T>
// void MutantStack<T>::push( const T value )
// {
//     _stack->push_front( value );
// }

// template <typename T>
// void MutantStack<T>::pop()
// {
//     _stack->pop_front();
// }

// template <typename T>
// bool MutantStack<T>::empty() const
// {
//     return ( _stack->empty() );
// }

// template <typename T>
// size_t MutantStack<T>::size() const
// {
//     return ( _stack->size() );
// }

// template <typename T>
// T& MutantStack<T>::top() const
// {
//     return ( _stack->front() );
// }

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::begin() const
{
    return ( this->c.begin() );
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::end() const
{
    return ( this->c.end() );
}
