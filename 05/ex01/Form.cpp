#include "Form.hpp"

Form::Form(std::string name_, unsigned int sign_, unsigned int execute_):
	name(name_),
	isSigned(false),
	sign(sign_),
	execute(execute_) {
		if (sign_ < 1 || execute_ < 1)
			throw Form::GradeTooHighException();
		else if (sign_ > 150 || execute_ > 150)
			throw Form::GradeTooLowException();


}

Form::Form(Form & src):
	name(src.getName()),
	isSigned(src.getIsSigned()),
	sign(src.getSign()),
	execute(src.getExecute()) {

}

Form::~Form(void) {
}

Form	& Form::operator=(Form const & rhs) {
	this->isSigned = rhs.getIsSigned();
	return (*this);
}

std::string		Form::getName(void) const {
	return (this->name);
}

bool			Form::getIsSigned(void) const {
	return (this->isSigned);
}

unsigned int	Form::getSign(void) const {
	return (this->sign);
}

unsigned int	Form::getExecute(void) const {
	return (this->execute);
}

void	Form::beSigned(Bureaucrat	& bc) {
	if (bc.getGrade() > this->sign)
		throw	Form::GradeTooLowException();
	else if (this->isSigned)
		return;
	this->isSigned = true;
}

std::ostream	& operator<<(std::ostream & lhs, Form & rhs) {
	lhs << "Form name : " << rhs.getName()
		<< " | is signed ? " << rhs.getIsSigned()
		<< " | grade too sign " << rhs.getSign()
		<< " | grade too execute " << rhs.getExecute() << std::endl;
	return (lhs);
}

