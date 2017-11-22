#ifndef STRINGSPECIFICATIONMODEL_H
#define STRINGSPECIFICATIONMODEL_H

#include <QString>
#include "source/Core/SpecificationModel.h"

class StringSpecificationModel : public SpecificationModel
{
	public:

		static QString TYPENAME;

		explicit StringSpecificationModel(QString value, QString defaultValue) : value(value), defaultValue(defaultValue) { }

		inline QString GetValue() const { return this->value; }
		inline void SetValue(QString value) { this->value = value; }

		virtual SpecificationModel* Clone() override { return nullptr; }

	private:

		QString value;
		QString defaultValue;
};

#endif // STRINGSPECIFICATIONMODEL_H
