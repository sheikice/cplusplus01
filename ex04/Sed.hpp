#ifndef SED_HPP
# define SED_HPP

# include <string>

class Sed
{
	public:
		Sed(const std::string& filename);
		~Sed();
		int			replace(const std::string& s1, const std::string& s2);

	private:
		std::string	_srcFile;
		std::string	_destFile;
};

#endif
