/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 08:48:09 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-02-18 08:48:09 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

/**
 * 
 * 
 * 
 * 
 */

int	main(void)
{
	Harl reply;

	print_banner();
	reply.complain("DEBUG");
	reply.complain("INFO");
	reply.complain("WARNING");
	reply.complain("ERROR");
}
