#pragma once

#include <array>

#include "HiveWE.h"
#include "BaseTreeModel.h"

class BuffTreeModel : public BaseTreeModel {
	struct Category {
		std::string name;
		BaseTreeItem* item;
	};

	std::unordered_map<std::string, Category> categories;
	std::vector<std::string> rowToCategory;

	std::array<std::string, 2> subCategories = {
		"Buffs",
		"Effects",
	};

	QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override;
	QModelIndex mapToSource(const QModelIndex& proxyIndex) const override;

public:
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
	explicit BuffTreeModel(QObject* parent = nullptr);
};