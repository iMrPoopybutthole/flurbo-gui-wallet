// Get last updates on http://flurbo.cc
//             ___ _  _ ____
//              |  |--| |===                      
//  _____ __    _____ _____ _____ _____
// |   __|  |  |  |  | __  | __  |     |
// |   __|  |__|  |  |    -| __ -|  |  |
// |__|  |_____|_____|__|__|_____|_____|
//   ___  ____ ____    _ ____ ____ ___
//   |--' |--< [__] ___| |=== |___  | 
//
// Based on "The Monero Project" and "Cryptonote Protocol".
//
// Copyright (c) 2018-.... The Flurbo developers.
// Copyright (c) 2014-2018 The Monero developers.
// Copyright (c) 2012-2013 The Cryptonote developers.
//
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef FILTER_H
#define FILTER_H

#include <QObject>

class filter : public QObject
{
    Q_OBJECT
private:
    bool m_tabPressed;

public:
    explicit filter(QObject *parent = 0);

protected:
    bool eventFilter(QObject *obj, QEvent *ev);

signals:
    void sequencePressed(const QVariant &o, const QVariant &seq);
    void sequenceReleased(const QVariant &o, const QVariant &seq);
    void mousePressed(const QVariant &o, const QVariant &x, const QVariant &y);
    void mouseReleased(const QVariant &o, const QVariant &x, const QVariant &y);
};

#endif // FILTER_H
