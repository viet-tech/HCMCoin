/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   34,   40,   40, 0x0a,
      41,   63,   40,   40, 0x0a,
      82,  107,   40,   40, 0x0a,
     114,  142,   40,   40, 0x0a,
     162,  183,   40,   40, 0x0a,
     203,  222,   40,   40, 0x0a,
     229,   40,   40,   40, 0x08,
     248,   40,   40,   40, 0x08,
     269,   40,   40,   40, 0x08,
     287,   40,   40,   40, 0x08,
     309,   40,   40,   40, 0x08,
     332,   40,   40,   40, 0x08,
     352,  380,   40,   40, 0x08,
     385,   40,   40,   40, 0x28,
     406,  380,   40,   40, 0x08,
     436,   40,   40,   40, 0x28,
     459,   40,   40,   40, 0x08,
     476,   40,   40,   40, 0x08,
     491,  532,   40,   40, 0x08,
     549,  107,   40,   40, 0x08,
     569,   40,   40,   40, 0x08,
     584,   40,   40,   40, 0x08,
     603,   40,   40,   40, 0x08,
     618,   40,   40,   40, 0x08,
     631,   40,   40,   40, 0x08,
     650,  678,   40,   40, 0x08,
     692,   40,   40,   40, 0x28,
     716,   40,   40,   40, 0x08,
     731,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0setNumConnections(int)\0"
    "count\0\0setNumBlocks(int,int)\0"
    "count,nTotalBlocks\0setEncryptionStatus(int)\0"
    "status\0error(QString,QString,bool)\0"
    "title,message,modal\0askFee(qint64,bool*)\0"
    "nFeeRequired,payFee\0handleURI(QString)\0"
    "strURI\0gotoOverviewPage()\0"
    "gotoStatisticsPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0gotoSignMessageTab(QString)\0"
    "addr\0gotoSignMessageTab()\0"
    "gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0incomingTransaction(QModelIndex,int,int)\0"
    "parent,start,end\0encryptWallet(bool)\0"
    "backupWallet()\0changePassphrase()\0"
    "unlockWallet()\0lockWallet()\0"
    "changeStyleSheet()\0showNormalIfMinimized(bool)\0"
    "fToggleHidden\0showNormalIfMinimized()\0"
    "toggleHidden()\0updateStakingIcon()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoOverviewPage(); break;
        case 7: _t->gotoStatisticsPage(); break;
        case 8: _t->gotoHistoryPage(); break;
        case 9: _t->gotoAddressBookPage(); break;
        case 10: _t->gotoReceiveCoinsPage(); break;
        case 11: _t->gotoSendCoinsPage(); break;
        case 12: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoSignMessageTab(); break;
        case 14: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoVerifyMessageTab(); break;
        case 16: _t->optionsClicked(); break;
        case 17: _t->aboutClicked(); break;
        case 18: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->backupWallet(); break;
        case 21: _t->changePassphrase(); break;
        case 22: _t->unlockWallet(); break;
        case 23: _t->lockWallet(); break;
        case 24: _t->changeStyleSheet(); break;
        case 25: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->showNormalIfMinimized(); break;
        case 27: _t->toggleHidden(); break;
        case 28: _t->updateStakingIcon(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
