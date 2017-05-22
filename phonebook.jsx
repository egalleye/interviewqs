import React from 'react';

class NameForm extends React.Component {
  constructor(props) {
    super(props);
    this.state = {value: ''};
    this.armory = {num: 0};

    this.handleChange = this.handleChange.bind(this);
    this.handleSubmit = this.handleSubmit.bind(this);
  }

  handleChange(event) {
    this.setState({value: event.target.value});
  }

  handleSubmit(event) {
    var it, secit;
    var vals = this.state.value.split(" ");
    var phonebook = {};
    this.armory.num = vals[0];
     
    for (it = 1; it <= this.armory.num*2; it+=2) {
        var name = "";
        var number = "";
        name = vals[it];
        number = vals[it+1];
        phonebook[name] = number;
    }
    for (secit = 0; secit < this.armory.num; secit++) {
        var lookup_name = vals[it];
        console.log(lookup_name);
        if (phonebook[lookup_name] === undefined) {
            console.log("Not found");
        } else {
            console.log(lookup_name + "=" + phonebook[lookup_name]);
        }
        it++;
    }
    
    
    event.preventDefault();
  }

  render() {
    return (
      <form onSubmit={this.handleSubmit}>
        <label>
          Name:
          <input type="text" value={this.state.value} onChange={this.handleChange} />
        </label>
        <input type="submit" value="Submit" />
      </form>
    );
  }
}

export default NameForm;
