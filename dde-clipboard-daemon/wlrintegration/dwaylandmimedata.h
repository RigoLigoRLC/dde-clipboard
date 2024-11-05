
#pragma once

#include <QMimeData>

class DWaylandMimeData : public QMimeData
{
    Q_OBJECT
public:
    DWaylandMimeData();
    virtual ~DWaylandMimeData() override;
    virtual QStringList formats() const override;
    virtual QVariant retrieveData(const QString &mimeType,
                                  QMetaType preferredType) const override;
};
