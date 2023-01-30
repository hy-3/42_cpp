#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, "undefined") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): Form(s.getName(), s.getGradeToSign(), s.getGradeToExecute(), s.getTarget()) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::checkExecution(executor);
	std::fstream outputFile ((this->getTarget() + "_shrubbery").c_str());
	outputFile <<
    "                   O                         " << std::endl <<
    "                  ***                        " << std::endl <<
    "                 **O**                       " << std::endl <<
    "                *******                      " << std::endl <<
    "               *********                     " << std::endl <<
    "              ***********                    " << std::endl <<
    "               ******o**                     " << std::endl <<
    "              ***********                    " << std::endl <<
    "             ****o********                   " << std::endl <<
    "            ***************                  " << std::endl <<
    "           ****o***o********                 " << std::endl <<
    "          *******************                " << std::endl <<
    "        ***********************              " << std::endl <<
    "           *****O***********                 " << std::endl <<
    "          **********o********                " << std::endl <<
    "         ****************o****               " << std::endl <<
    "        **O********************              " << std::endl <<
    "       ***********o********O****             " << std::endl <<
    "     *****************************           " << std::endl <<
    "         *********************               " << std::endl <<
    "        ***o*******************              " << std::endl <<
    "       ***********o*******o*****             " << std::endl <<
    "      ***************************            " << std::endl <<
    "     ***********************O*****           " << std::endl <<
    "    ***O***************************          " << std::endl <<
    "  ***********************************        " << std::endl <<
    "       *************************             " << std::endl <<
    "      *******o********o**********            " << std::endl <<
    "     *****************************           " << std::endl <<
    "    **************o****************          " << std::endl <<
    "   *************************O*******         " << std::endl <<
    "  *****O*****************************        " << std::endl <<
    "**************o************************      " << std::endl <<
    "      ***************************            " << std::endl <<
    "     *************o***************           " << std::endl <<
    "    ***********o*******************          " << std::endl <<
    "   **************************O******         " << std::endl <<
    "  ***o******************O************        " << std::endl <<
    "***o***********o****************o******      " << std::endl <<
    "                  ###                        " << std::endl <<
    "                  ###                        " << std::endl <<
    "                  ###                        " << std::endl <<
    "              ###########                    " << std::endl <<
    "              ###########                    " << std::endl;
	outputFile.close();
}