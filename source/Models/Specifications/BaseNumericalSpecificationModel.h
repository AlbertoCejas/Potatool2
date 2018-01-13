#ifndef BASENUMERICALSPECIFICATIONMODEL_H
#define BASENUMERICALSPECIFICATIONMODEL_H

#include "source/Core/SpecificationModel.h"
#include <limits>
#include <type_traits>

template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
class BaseNumericalSpecificationModel : public SpecificationModel
{
	public:

		explicit BaseNumericalSpecificationModel(T minValue, T maxValue, T defaultValue)
			: minValue(minValue), maxValue(maxValue), defaultValue(defaultValue) { }
		explicit BaseNumericalSpecificationModel(T defaultValue)
			: minValue(std::numeric_limits<T>::min()), maxValue(std::numeric_limits<T>::max()), defaultValue(defaultValue) { }

		inline T GetMinValue() const { return this->minValue; }
		inline void SetMinValue(T minValue) { this->minValue = minValue; }

		inline T GetValue() const { return this->value; }
		inline void SetValue(T value) { this->value = value; }

		inline T GetMaxValue() const { return this->maxValue; }
		inline void SetMaxValue(T maxValue) { this->maxValue = maxValue; }

		virtual SpecificationModel* Clone() override { return nullptr; }

	private:

		T minValue;
		T maxValue;
		T defaultValue;

};

#endif // BASENUMERICALSPECIFICATIONMODEL_H
