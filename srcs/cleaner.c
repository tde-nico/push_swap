/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-nico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:14:09 by tde-nico          #+#    #+#             */
/*   Updated: 2022/01/26 09:14:11 by tde-nico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_instructions(t_instruction *instructions)
{
	t_instruction	*next;

	while (instructions)
	{
		next = instructions->next;
		free(instructions->line);
		free(instructions);
		instructions = next;
	}
}

void	free_stack(t_stack *stack)
{
	free(stack->array);
	free(stack);
}

void	free_prg(t_program *prg)
{
	free_instructions(prg->instr);
	free(prg->stack_a.array);
	free(prg->stack_b.array);
}
