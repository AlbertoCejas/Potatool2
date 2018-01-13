#ifndef STRINGSPECIFICATIONMODEL_H
#define STRINGSPECIFICATIONMODEL_H

#include <QString>
#include "source/Core/SpecificationModel.h"

class StringSpecificationModel : public SpecificationModel
{
	public:

        static const QString TYPENAME;
        static const QString DEFAULT_VALUE;

		explicit StringSpecificationModel(QString defaultValue) : defaultValue(defaultValue) { }

		inline QString GetDefaultValue() const { return this->defaultValue; }
		inline void SetDefaultValue(QString value) { this->defaultValue = value; }

		virtual SpecificationModel* Clone() override { return nullptr; }

	private:

		QString defaultValue;
};

#endif // STRINGSPECIFICATIONMODEL_H
