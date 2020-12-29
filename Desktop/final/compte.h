#ifndef compte_H
#define compte_H
#include<QString>
#include<QSqlQueryModel>



class compte
{

    QString Type;
    QString mdp;
    QString Identifiant;
    QString cin;

public:

    QString getType()
    {return Type;}
    QString getmdp()
    {return mdp;}
    QString getIdentifiant()
    {return Identifiant;}
    QString getcin()
    {return cin; }

    void setType(QString t)
    {Type=t;}
    void setmdp(QString m)
    {mdp=m;}
    void setIdentifiant(QString id)
    { Identifiant=id;}
    void setcin(QString c)
    {cin=c; }


    compte();
    compte(QString,QString,QString,QString);

    bool ajouter();
    QSqlQueryModel *load();
    QSqlQueryModel * read(QString);
    QSqlQuery editview(QString);
    QSqlQueryModel * chercher(QString);

    bool Delete(QString);
    bool Update();

};

#endif // compte_H
