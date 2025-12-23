/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:47:01 by jbergfel          #+#    #+#             */
/*   Updated: 2025/12/22 21:47:41 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <set>
#include <string>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;

		void mergeInsertSortVector(std::vector<int>& data, int left, int right);
		void mergeInsertSortDeque(std::deque<int>& data, int left, int right);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		void addNumber(int num);
		void sortAndPrint();
};
