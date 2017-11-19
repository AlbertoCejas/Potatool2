#ifndef SPECIFICATION_H
#define SPECIFICATION_H

#include <QString>
#include <QtGlobal>
#include "Core/ModelSpecificationFactory.h"

class SpecificationModel;

class Specification
{
	public:

		explicit Specification(ulong id, const QString& name);
		explicit Specification(ulong id, const QString& name, const QString& modelName);

		inline const QString& GetName() const { return name; }

		inline void SetName(const QString& newName) { this->name = newName;}
		void SetModel(const QString& modelName);


	protected:

		static ModelSpecificationFactory modelFactory;

		ulong id;
		QString name;
		SpecificationModel* model;
};

#endif // SPECIFICATION_H
