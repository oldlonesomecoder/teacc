//
// Created by lsc on 21-01-29.
//

//#ifndef TEACC_APPLICATION_H
//#define TEACC_APPLICATION_H


#pragma once
#include <tea++/utils/colors.h>
#include <tea++/diagnostics/diagnostic.h>


namespace teacc::diagnostics
{

/*!
 * @brief base class of he diagnostics/tests application framework.
 *
 */
class application
{
public:
    
    using status = expect<diagnostic::code>;
    
    application();
    application(string_t::collection const& args);
    
    
    virtual ~application();
    
    virtual status run();
    
};

}
//#endif //TEACC_APPLICATION_H
