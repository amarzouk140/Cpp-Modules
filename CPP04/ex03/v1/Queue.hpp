/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:29:45 by amarzouk          #+#    #+#             */
/*   Updated: 2024/04/29 13:29:47 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

class Node
{
public:
	void	*val;
	Node	*next;
	Node();
	Node(void *val);
	~Node();
};


class Queue
{
private:
	Node	*front;
	Node	*rear;
public:
	Queue();
	~Queue();
	void	enqueue(void *val);
	void	*dequeue(void);
	void	*queueFront();
	int		isEmpty();

};


#endif 