/***************************************************************************
 *                           STDPLSState.h                                 *
 *                           -------------------                           *
 * copyright            : (C) 2013 by Jesus Garrido                        *
 * email                : jgarrido@atc.ugr.es                              *
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef STDPLSSTATE_H_
#define STDPLSSTATE_H_

#include "STDPState.h"

/*!
 * \file STDPLSState.h
 *
 * \author Jesus Garrido
 * \date March 2013
 *
 * This file declares a class which abstracts the current state of a synaptic connection
 * with STDP (only accounting the last previous spike) capabilities.
 */

/*!
 * \class STDPLSState
 *
 * \brief Synaptic connection current state.
 *
 * This class abstracts the state of a synaptic connection including STDP (only accounting the last previous spike) and defines the state variables of
 * that connection.
 *
 * \author Jesus Garrido
 * \date March 2013
 */

class STDPLSState : public STDPState{

	public:

		/*!
		 * \brief Default constructor with parameters.
		 *
		 * It generates a new state of a connection.
		 *
		 * \param LTPtau Time constant of the LTP component.
		 * \param LTDtau Time constant of the LTD component.
		 */
		STDPLSState(double LTPtau, double LTDtau);

		/*!
		 * \brief Class destructor.
		 *
		 * It destroys an object of this class.
		 */
		virtual ~STDPLSState();

		/*!
		 * \brief It implements the behaviour when it transmits a spike.
		 *
		 * It implements the behaviour when it transmits a spike. It must be implemented
		 * by any inherited class.
		 */
		virtual void ApplyPresynapticSpike();

		/*!
		 * \brief It implements the behaviour when the target cell fires a spike.
		 *
		 * It implements the behaviour when it the target cell fires a spike. It must be implemented
		 * by any inherited class.
		 */
		virtual void ApplyPostsynapticSpike();

};

#endif /* NEURONSTATE_H_ */

