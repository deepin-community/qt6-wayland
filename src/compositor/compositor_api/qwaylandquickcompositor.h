/****************************************************************************
**
** Copyright (C) 2017 Jolla Ltd, author: <giulio.camuffo@jollamobile.com>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtWaylandCompositor module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QWAYLANDQUICKCOMPOSITOR_H
#define QWAYLANDQUICKCOMPOSITOR_H

#include <QtWaylandCompositor/qwaylandcompositor.h>
#include <QtQml/QQmlParserStatus>

QT_REQUIRE_CONFIG(wayland_compositor_quick);

QT_BEGIN_NAMESPACE

class QQuickWindow;
class QWaylandQuickCompositorPrivate;
class QWaylandView;

class Q_WAYLAND_COMPOSITOR_EXPORT QWaylandQuickCompositor : public QWaylandCompositor, public QQmlParserStatus
{
    Q_INTERFACES(QQmlParserStatus)
    Q_OBJECT
public:
    QWaylandQuickCompositor(QObject *parent = nullptr);
    void create() override;

    void grabSurface(QWaylandSurfaceGrabber *grabber, const QWaylandBufferRef &buffer) override;

protected:
    void classBegin() override;
    void componentComplete() override;
};

QT_END_NAMESPACE

#endif
