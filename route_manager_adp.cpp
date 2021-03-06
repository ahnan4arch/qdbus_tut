/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v -c RouteManagerAdaptor -a route_manager_adp route_mgr.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "route_manager_adp.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class RouteManagerAdaptor
 */

RouteManagerAdaptor::RouteManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

RouteManagerAdaptor::~RouteManagerAdaptor()
{
    // destructor
}

QDBusObjectPath RouteManagerAdaptor::StartNav(double lat, double lon)
{
    // handle method call sn.ornap.navd.routemanager.StartNav
    QDBusObjectPath routePath;
    QMetaObject::invokeMethod(parent(), "StartNav", Q_RETURN_ARG(QDBusObjectPath, routePath), Q_ARG(double, lat), Q_ARG(double, lon));
    return routePath;
}

void RouteManagerAdaptor::StopNav(const QDBusObjectPath &route_path)
{
    // handle method call sn.ornap.navd.routemanager.StopNav
    QMetaObject::invokeMethod(parent(), "StopNav", Q_ARG(QDBusObjectPath, route_path));
}

